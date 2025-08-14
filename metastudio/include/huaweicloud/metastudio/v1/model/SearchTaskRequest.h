
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SearchTaskRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SearchTaskRequest_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SearchTaskRequest
    : public ModelBase
{
public:
    SearchTaskRequest();
    virtual ~SearchTaskRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SearchTaskRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。  格式为(YYYYMMDD&#39;T&#39;HHMMSS&#39;Z&#39;)。
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带项目ID信息。
    /// </summary>

    std::string getXProjectId() const;
    bool xProjectIdIsSet() const;
    void unsetxProjectId();
    void setXProjectId(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::vector<std::string>& getResource();
    bool resourceIsSet() const;
    void unsetresource();
    void setResource(const std::vector<std::string>& value);

    /// <summary>
    /// 业务id,比如问答时传入skill_id
    /// </summary>

    std::string getBusinessId() const;
    bool businessIdIsSet() const;
    void unsetbusinessId();
    void setBusinessId(const std::string& value);

    /// <summary>
    /// 开始时间戳
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// 结束时间戳
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::vector<std::string> resource_;
    bool resourceIsSet_;
    std::string businessId_;
    bool businessIdIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    SearchTaskRequest& dereference_from_shared_ptr(std::shared_ptr<SearchTaskRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SearchTaskRequest_H_
