
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldVO_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldVO_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/projectman/v4/model/OptionEntity.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 字段参数返回体
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  FieldVO
    : public ModelBase
{
public:
    FieldVO();
    virtual ~FieldVO();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FieldVO members

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getDisplayName() const;
    bool displayNameIsSet() const;
    void unsetdisplayName();
    void setDisplayName(const std::string& value);

    /// <summary>
    /// 添加人
    /// </summary>

    std::string getCreatedBy() const;
    bool createdByIsSet() const;
    void unsetcreatedBy();
    void setCreatedBy(const std::string& value);

    /// <summary>
    /// 字段类型
    /// </summary>

    std::string getFieldType() const;
    bool fieldTypeIsSet() const;
    void unsetfieldType();
    void setFieldType(const std::string& value);

    /// <summary>
    /// 是否显示在新建页
    /// </summary>

    bool isShowOnCard() const;
    bool showOnCardIsSet() const;
    void unsetshowOnCard();
    void setShowOnCard(bool value);

    /// <summary>
    /// 是否必填
    /// </summary>

    bool isOptional() const;
    bool optionalIsSet() const;
    void unsetoptional();
    void setOptional(bool value);

    /// <summary>
    /// 字段选项
    /// </summary>

    std::vector<OptionEntity>& getAllOptions();
    bool allOptionsIsSet() const;
    void unsetallOptions();
    void setAllOptions(const std::vector<OptionEntity>& value);

    /// <summary>
    /// 默认值
    /// </summary>

    std::string getDefaultValue() const;
    bool defaultValueIsSet() const;
    void unsetdefaultValue();
    void setDefaultValue(const std::string& value);


protected:
    std::string displayName_;
    bool displayNameIsSet_;
    std::string createdBy_;
    bool createdByIsSet_;
    std::string fieldType_;
    bool fieldTypeIsSet_;
    bool showOnCard_;
    bool showOnCardIsSet_;
    bool optional_;
    bool optionalIsSet_;
    std::vector<OptionEntity> allOptions_;
    bool allOptionsIsSet_;
    std::string defaultValue_;
    bool defaultValueIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_FieldVO_H_
