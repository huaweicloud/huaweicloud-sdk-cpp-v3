
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDeleteKeypairRequest_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDeleteKeypairRequest_H_

#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  NovaDeleteKeypairRequest
    : public ModelBase
{
public:
    NovaDeleteKeypairRequest();
    virtual ~NovaDeleteKeypairRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaDeleteKeypairRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getKeypairName() const;
    bool keypairNameIsSet() const;
    void unsetkeypairName();
    void setKeypairName(const std::string& value);


protected:
    std::string keypairName_;
    bool keypairNameIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    NovaDeleteKeypairRequest& dereference_from_shared_ptr(std::shared_ptr<NovaDeleteKeypairRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaDeleteKeypairRequest_H_
