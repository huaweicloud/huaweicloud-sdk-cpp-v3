
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_SessionContext_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_SessionContext_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cts/v3/model/Attributes.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 临时安全凭据的属性。
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  SessionContext
    : public ModelBase
{
public:
    SessionContext();
    virtual ~SessionContext();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SessionContext members

    /// <summary>
    /// 
    /// </summary>

    Attributes getAttributes() const;
    bool attributesIsSet() const;
    void unsetattributes();
    void setAttributes(const Attributes& value);


protected:
    Attributes attributes_;
    bool attributesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_SessionContext_H_
