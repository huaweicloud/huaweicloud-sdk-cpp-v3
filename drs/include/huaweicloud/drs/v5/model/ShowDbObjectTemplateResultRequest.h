
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDbObjectTemplateResultRequest_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDbObjectTemplateResultRequest_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_DRS_V5_EXPORT  ShowDbObjectTemplateResultRequest
    : public ModelBase
{
public:
    ShowDbObjectTemplateResultRequest();
    virtual ~ShowDbObjectTemplateResultRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDbObjectTemplateResultRequest members

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
    /// 导入的结果类型。取值： - detail：获取最新导入的文件与校验结果，上传后的文件若存在错误，会同时将错误原因标记在文件内。 - synchronized：获取已同步的（已下发的）对象文件结果。 - change: 获取新增和删除的对象结果（当再编辑时使用）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string type_;
    bool typeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDbObjectTemplateResultRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDbObjectTemplateResultRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ShowDbObjectTemplateResultRequest_H_
