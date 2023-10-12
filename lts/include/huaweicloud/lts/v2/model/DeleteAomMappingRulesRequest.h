
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteAomMappingRulesRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteAomMappingRulesRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  DeleteAomMappingRulesRequest
    : public ModelBase
{
public:
    DeleteAomMappingRulesRequest();
    virtual ~DeleteAomMappingRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteAomMappingRulesRequest members

    /// <summary>
    /// 接入lts规则id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteAomMappingRulesRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteAomMappingRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_DeleteAomMappingRulesRequest_H_
