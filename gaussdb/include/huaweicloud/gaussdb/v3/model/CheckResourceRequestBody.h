
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckResourceRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckResourceRequestBody_H_


#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/gaussdb/v3/model/CheckResourceInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  CheckResourceRequestBody
    : public ModelBase
{
public:
    CheckResourceRequestBody();
    virtual ~CheckResourceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CheckResourceRequestBody members

    /// <summary>
    /// 校验类型。 - createInstance：校验创建实例。 - createReadonlyNode：校验创建只读节点。 - resizeFlavor：校验规格变更。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CheckResourceInfo getResource() const;
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const CheckResourceInfo& value);


protected:
    std::string action_;
    bool actionIsSet_;
    CheckResourceInfo resource_;
    bool resourceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_CheckResourceRequestBody_H_
