
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAomMappingRulesRequest_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAomMappingRulesRequest_H_


#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/lts/v2/model/AomMappingRequestInfo.h>

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
class HUAWEICLOUD_LTS_V2_EXPORT  CreateAomMappingRulesRequest
    : public ModelBase
{
public:
    CreateAomMappingRulesRequest();
    virtual ~CreateAomMappingRulesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateAomMappingRulesRequest members

    /// <summary>
    /// 是否开启自动映射
    /// </summary>

    bool isIsBatch() const;
    bool isBatchIsSet() const;
    void unsetisBatch();
    void setIsBatch(bool value);

    /// <summary>
    /// 
    /// </summary>

    AomMappingRequestInfo getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AomMappingRequestInfo& value);


protected:
    bool isBatch_;
    bool isBatchIsSet_;
    AomMappingRequestInfo body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateAomMappingRulesRequest& dereference_from_shared_ptr(std::shared_ptr<CreateAomMappingRulesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_CreateAomMappingRulesRequest_H_
