
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v5/model/UploadDbObjectTemplateRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  UploadDbObjectTemplateRequest
    : public ModelBase
{
public:
    UploadDbObjectTemplateRequest();
    virtual ~UploadDbObjectTemplateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UploadDbObjectTemplateRequest members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 请求语言类型。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 文件模板支持数据同步级别，不填默认为table表级。 - database：库级 - table：表级 - column：列级
    /// </summary>

    std::string getFileImportDbLevel() const;
    bool fileImportDbLevelIsSet() const;
    void unsetfileImportDbLevel();
    void setFileImportDbLevel(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UploadDbObjectTemplateRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UploadDbObjectTemplateRequestBody& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string fileImportDbLevel_;
    bool fileImportDbLevelIsSet_;
    UploadDbObjectTemplateRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UploadDbObjectTemplateRequest& dereference_from_shared_ptr(std::shared_ptr<UploadDbObjectTemplateRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_UploadDbObjectTemplateRequest_H_
