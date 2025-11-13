
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowEncryptFileRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowEncryptFileRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowEncryptFileRequest
    : public ModelBase
{
public:
    ShowEncryptFileRequest();
    virtual ~ShowEncryptFileRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowEncryptFileRequest members

    /// <summary>
    /// 租户id
    /// </summary>

    std::string getTenantId() const;
    bool tenantIdIsSet() const;
    void unsettenantId();
    void setTenantId(const std::string& value);

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 一次性token
    /// </summary>

    std::string getOnceToken() const;
    bool onceTokenIsSet() const;
    void unsetonceToken();
    void setOnceToken(const std::string& value);


protected:
    std::string tenantId_;
    bool tenantIdIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string onceToken_;
    bool onceTokenIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowEncryptFileRequest& dereference_from_shared_ptr(std::shared_ptr<ShowEncryptFileRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowEncryptFileRequest_H_
