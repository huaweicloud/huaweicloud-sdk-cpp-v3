
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateConfigurationRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateConfigurationRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/CreateConfigurationRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  CreateConfigurationRequest
    : public ModelBase
{
public:
    CreateConfigurationRequest();
    virtual ~CreateConfigurationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateConfigurationRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateConfigurationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateConfigurationRequestBody& value);


protected:
    CreateConfigurationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateConfigurationRequest& dereference_from_shared_ptr(std::shared_ptr<CreateConfigurationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateConfigurationRequest_H_
