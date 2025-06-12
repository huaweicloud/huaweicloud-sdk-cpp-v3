
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExportKnowledgeSkillRequest_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExportKnowledgeSkillRequest_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ExportKnowledgeSkillRequest
    : public ModelBase
{
public:
    ExportKnowledgeSkillRequest();
    virtual ~ExportKnowledgeSkillRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExportKnowledgeSkillRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，携带的鉴权信息。
    /// </summary>

    std::string getAuthorization() const;
    bool authorizationIsSet() const;
    void unsetauthorization();
    void setAuthorization(const std::string& value);

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。
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
    /// 第三方用户ID。不允许输入中文。
    /// </summary>

    std::string getXAppUserId() const;
    bool xAppUserIdIsSet() const;
    void unsetxAppUserId();
    void setXAppUserId(const std::string& value);

    /// <summary>
    /// 技能ID。
    /// </summary>

    std::string getSkillId() const;
    bool skillIdIsSet() const;
    void unsetskillId();
    void setSkillId(const std::string& value);

    /// <summary>
    /// 导出格式类型。0：科大讯飞
    /// </summary>

    int32_t getExportType() const;
    bool exportTypeIsSet() const;
    void unsetexportType();
    void setExportType(int32_t value);


protected:
    std::string authorization_;
    bool authorizationIsSet_;
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string xProjectId_;
    bool xProjectIdIsSet_;
    std::string xAppUserId_;
    bool xAppUserIdIsSet_;
    std::string skillId_;
    bool skillIdIsSet_;
    int32_t exportType_;
    bool exportTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExportKnowledgeSkillRequest& dereference_from_shared_ptr(std::shared_ptr<ExportKnowledgeSkillRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ExportKnowledgeSkillRequest_H_
