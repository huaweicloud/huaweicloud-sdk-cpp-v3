
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListQuotasRequest_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListQuotasRequest_H_

#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  CinderListQuotasRequest
    : public ModelBase
{
public:
    CinderListQuotasRequest();
    virtual ~CinderListQuotasRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderListQuotasRequest members

    /// <summary>
    /// 
    /// </summary>

    std::string getTargetProjectId() const;
    bool targetProjectIdIsSet() const;
    void unsettargetProjectId();
    void setTargetProjectId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getUsage() const;
    bool usageIsSet() const;
    void unsetusage();
    void setUsage(const std::string& value);


protected:
    std::string targetProjectId_;
    bool targetProjectIdIsSet_;
    std::string usage_;
    bool usageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CinderListQuotasRequest& dereference_from_shared_ptr(std::shared_ptr<CinderListQuotasRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderListQuotasRequest_H_
