
#ifndef HUAWEICLOUD_SDK_LTS_V2_MODEL_NotificationTemplate_H_
#define HUAWEICLOUD_SDK_LTS_V2_MODEL_NotificationTemplate_H_

#include <huaweicloud/lts/v2/LtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/lts/v2/model/CreateNotificationTemplateRequestBody.h>
#include <huaweicloud/lts/v2/model/SubTemplate.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LTS_V2_EXPORT  NotificationTemplate
    : public ModelBase
{
public:
    NotificationTemplate();
    virtual ~NotificationTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NotificationTemplate members

    /// <summary>
    /// 通知规则名称，必填，只含有汉字、数字、字母、下划线、中划线，不能以下划线等特殊符号开头和结尾，长度为 1 - 100，创建后不可修改
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 保留字段，非必填，只支持sms（短信），dingding（钉钉），wechat（企业微信），email（邮件）和webhook（网络钩子）
    /// </summary>

    std::vector<std::string>& getType();
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::vector<std::string>& value);

    /// <summary>
    /// 模板描述，必填，只含有汉字、数字、字母、下划线不能以下划线开头和结尾，长度为0--1024
    /// </summary>

    std::string getDesc() const;
    bool descIsSet() const;
    void unsetdesc();
    void setDesc(const std::string& value);

    /// <summary>
    /// 模板来源，目前必填为LTS，否则会筛选不出来
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// 语言，必填，目前可填zh-cn和en-us
    /// </summary>

    std::string getLocale() const;
    bool localeIsSet() const;
    void unsetlocale();
    void setLocale(const std::string& value);

    /// <summary>
    /// 模板正文，为一个数组
    /// </summary>

    std::vector<SubTemplate>& getTemplates();
    bool templatesIsSet() const;
    void unsettemplates();
    void setTemplates(const std::vector<SubTemplate>& value);

    /// <summary>
    /// 创建时间，为毫秒时间戳
    /// </summary>

    int64_t getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(int64_t value);

    /// <summary>
    /// 更新时间，为毫秒时间戳
    /// </summary>

    int64_t getModifyTime() const;
    bool modifyTimeIsSet() const;
    void unsetmodifyTime();
    void setModifyTime(int64_t value);

    /// <summary>
    /// 项目ID，获取方式请参见：获取账号ID、项目ID、日志组ID、日志流ID（https://support.huaweicloud.com/api-lts/lts_api_0006.html）。
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::vector<std::string> type_;
    bool typeIsSet_;
    std::string desc_;
    bool descIsSet_;
    std::string source_;
    bool sourceIsSet_;
    std::string locale_;
    bool localeIsSet_;
    std::vector<SubTemplate> templates_;
    bool templatesIsSet_;
    int64_t createTime_;
    bool createTimeIsSet_;
    int64_t modifyTime_;
    bool modifyTimeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LTS_V2_MODEL_NotificationTemplate_H_
