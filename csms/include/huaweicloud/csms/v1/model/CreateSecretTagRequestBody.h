
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretTagRequestBody_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretTagRequestBody_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/TagItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  CreateSecretTagRequestBody
    : public ModelBase
{
public:
    CreateSecretTagRequestBody();
    virtual ~CreateSecretTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateSecretTagRequestBody members

    /// <summary>
    /// 
    /// </summary>

    TagItem getTag() const;
    bool tagIsSet() const;
    void unsettag();
    void setTag(const TagItem& value);


protected:
    TagItem tag_;
    bool tagIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_CreateSecretTagRequestBody_H_
