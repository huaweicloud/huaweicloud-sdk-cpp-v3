
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectTestCaseFieldVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectTestCaseFieldVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProjectTestCaseFieldVo
    : public ModelBase
{
public:
    ProjectTestCaseFieldVo();
    virtual ~ProjectTestCaseFieldVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectTestCaseFieldVo members

    /// <summary>
    /// 项目用例自定义字段主键
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段类型（单行文本text、多行文本textArea、单选框radio、多选框checkBox、日期date、数字number、单选用户user）
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段选项（数字类型时，数组两个值，第一个是最小值，第二个是最大值）
    /// </summary>

    std::string getOptions() const;
    bool optionsIsSet() const;
    void unsetoptions();
    void setOptions(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段创建人
    /// </summary>

    std::string getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段更新人
    /// </summary>

    std::string getUpdater() const;
    bool updaterIsSet() const;
    void unsetupdater();
    void setUpdater(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段id（1-25数字）
    /// </summary>

    int32_t getCustomFieldId() const;
    bool customFieldIdIsSet() const;
    void unsetcustomFieldId();
    void setCustomFieldId(int32_t value);

    /// <summary>
    /// 项目用例自定义字段名称
    /// </summary>

    std::string getCustomFieldName() const;
    bool customFieldNameIsSet() const;
    void unsetcustomFieldName();
    void setCustomFieldName(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段入参或者返回参数名称
    /// </summary>

    std::string getCustomFieldParam() const;
    bool customFieldParamIsSet() const;
    void unsetcustomFieldParam();
    void setCustomFieldParam(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段类型国际化名称
    /// </summary>

    std::string getTypeName() const;
    bool typeNameIsSet() const;
    void unsettypeName();
    void setTypeName(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段创建时间
    /// </summary>

    utility::datetime getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const utility::datetime& value);

    /// <summary>
    /// 项目用例自定义字段创建时间时间戳
    /// </summary>

    int64_t getCreateTimeTimestamp() const;
    bool createTimeTimestampIsSet() const;
    void unsetcreateTimeTimestamp();
    void setCreateTimeTimestamp(int64_t value);

    /// <summary>
    /// 项目用例自定义字段更新时间
    /// </summary>

    utility::datetime getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const utility::datetime& value);

    /// <summary>
    /// 项目用例自定义字段更新时间时间戳
    /// </summary>

    int64_t getUpdateTimeTimestamp() const;
    bool updateTimeTimestampIsSet() const;
    void unsetupdateTimeTimestamp();
    void setUpdateTimeTimestamp(int64_t value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);


protected:
    std::string uri_;
    bool uriIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string options_;
    bool optionsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string creator_;
    bool creatorIsSet_;
    std::string updater_;
    bool updaterIsSet_;
    int32_t customFieldId_;
    bool customFieldIdIsSet_;
    std::string customFieldName_;
    bool customFieldNameIsSet_;
    std::string customFieldParam_;
    bool customFieldParamIsSet_;
    std::string typeName_;
    bool typeNameIsSet_;
    utility::datetime createTime_;
    bool createTimeIsSet_;
    int64_t createTimeTimestamp_;
    bool createTimeTimestampIsSet_;
    utility::datetime updateTime_;
    bool updateTimeIsSet_;
    int64_t updateTimeTimestamp_;
    bool updateTimeTimestampIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectTestCaseFieldVo_H_
