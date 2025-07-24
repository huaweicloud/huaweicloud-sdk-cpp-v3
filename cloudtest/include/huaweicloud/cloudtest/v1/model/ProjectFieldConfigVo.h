
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectFieldConfigVo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectFieldConfigVo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cloudtest/v1/model/NameAndIdVo.h>
#include <vector>
#include <huaweicloud/cloudtest/v1/model/ProjectFieldConfigOptionVo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 实际的数据类型：单个对象，集合 或 NULL
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ProjectFieldConfigVo
    : public ModelBase
{
public:
    ProjectFieldConfigVo();
    virtual ~ProjectFieldConfigVo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProjectFieldConfigVo members

    /// <summary>
    /// 字段配置URI标识
    /// </summary>

    std::string getUri() const;
    bool uriIsSet() const;
    void unseturi();
    void setUri(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getUpdator() const;
    bool updatorIsSet() const;
    void unsetupdator();
    void setUpdator(const NameAndIdVo& value);

    /// <summary>
    /// 描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 项目用例自定义字段名称
    /// </summary>

    std::string getCustomName() const;
    bool customNameIsSet() const;
    void unsetcustomName();
    void setCustomName(const std::string& value);

    /// <summary>
    /// 字段名（对应后端参数名）
    /// </summary>

    std::string getTableFieldName() const;
    bool tableFieldNameIsSet() const;
    void unsettableFieldName();
    void setTableFieldName(const std::string& value);

    /// <summary>
    /// 字段类型(单行文本text、多行文本textArea、单选框radio、多选框checkbox、日期date、数字number、用户user)。
    /// </summary>

    std::string getValueType() const;
    bool valueTypeIsSet() const;
    void unsetvalueType();
    void setValueType(const std::string& value);

    /// <summary>
    /// 字段类型国际化名称
    /// </summary>

    std::string getValueTypeName() const;
    bool valueTypeNameIsSet() const;
    void unsetvalueTypeName();
    void setValueTypeName(const std::string& value);

    /// <summary>
    /// 是否系统字段
    /// </summary>

    int32_t getIsSystem() const;
    bool isSystemIsSet() const;
    void unsetisSystem();
    void setIsSystem(int32_t value);

    /// <summary>
    /// 是否显示
    /// </summary>

    int32_t getIsDisplay() const;
    bool isDisplayIsSet() const;
    void unsetisDisplay();
    void setIsDisplay(int32_t value);

    /// <summary>
    /// 是否必填
    /// </summary>

    int32_t getIsRequired() const;
    bool isRequiredIsSet() const;
    void unsetisRequired();
    void setIsRequired(int32_t value);

    /// <summary>
    /// 顺序数值
    /// </summary>

    int32_t getSortNumb() const;
    bool sortNumbIsSet() const;
    void unsetsortNumb();
    void setSortNumb(int32_t value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);

    /// <summary>
    /// 扩展字段uri(用于连表查扩展字段)
    /// </summary>

    std::string getCustomFieldUri() const;
    bool customFieldUriIsSet() const;
    void unsetcustomFieldUri();
    void setCustomFieldUri(const std::string& value);

    /// <summary>
    /// 资源类型
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NameAndIdVo getCreator() const;
    bool creatorIsSet() const;
    void unsetcreator();
    void setCreator(const NameAndIdVo& value);

    /// <summary>
    /// 创建时间时间戳
    /// </summary>

    int64_t getCreateTimeStamp() const;
    bool createTimeStampIsSet() const;
    void unsetcreateTimeStamp();
    void setCreateTimeStamp(int64_t value);

    /// <summary>
    /// 更新时间时间戳
    /// </summary>

    int64_t getUpdateTimeStamp() const;
    bool updateTimeStampIsSet() const;
    void unsetupdateTimeStamp();
    void setUpdateTimeStamp(int64_t value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

    /// <summary>
    /// 可选项
    /// </summary>

    std::vector<ProjectFieldConfigOptionVo>& getOptionVos();
    bool optionVosIsSet() const;
    void unsetoptionVos();
    void setOptionVos(const std::vector<ProjectFieldConfigOptionVo>& value);

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


protected:
    std::string uri_;
    bool uriIsSet_;
    NameAndIdVo updator_;
    bool updatorIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string customName_;
    bool customNameIsSet_;
    std::string tableFieldName_;
    bool tableFieldNameIsSet_;
    std::string valueType_;
    bool valueTypeIsSet_;
    std::string valueTypeName_;
    bool valueTypeNameIsSet_;
    int32_t isSystem_;
    bool isSystemIsSet_;
    int32_t isDisplay_;
    bool isDisplayIsSet_;
    int32_t isRequired_;
    bool isRequiredIsSet_;
    int32_t sortNumb_;
    bool sortNumbIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;
    std::string customFieldUri_;
    bool customFieldUriIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    NameAndIdVo creator_;
    bool creatorIsSet_;
    int64_t createTimeStamp_;
    bool createTimeStampIsSet_;
    int64_t updateTimeStamp_;
    bool updateTimeStampIsSet_;
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::vector<ProjectFieldConfigOptionVo> optionVos_;
    bool optionVosIsSet_;
    int32_t customFieldId_;
    bool customFieldIdIsSet_;
    std::string customFieldName_;
    bool customFieldNameIsSet_;
    std::string customFieldParam_;
    bool customFieldParamIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ProjectFieldConfigVo_H_
