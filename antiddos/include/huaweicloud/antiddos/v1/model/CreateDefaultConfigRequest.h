
#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_CreateDefaultConfigRequest_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_CreateDefaultConfigRequest_H_


#include <huaweicloud/antiddos/v1/AntiDDoSExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/antiddos/v1/model/DdosConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ANTIDDOS_V1_EXPORT  CreateDefaultConfigRequest
    : public ModelBase
{
public:
    CreateDefaultConfigRequest();
    virtual ~CreateDefaultConfigRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDefaultConfigRequest members

    /// <summary>
    /// 
    /// </summary>

    DdosConfig getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DdosConfig& value);


protected:
    DdosConfig body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDefaultConfigRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDefaultConfigRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V1_MODEL_CreateDefaultConfigRequest_H_
