
#ifndef HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsDatasetColumn_H_
#define HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsDatasetColumn_H_


#include <huaweicloud/tics/v1/TicsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_TICS_V1_EXPORT  TicsDatasetColumn
    : public ModelBase
{
public:
    TicsDatasetColumn();
    virtual ~TicsDatasetColumn();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TicsDatasetColumn members

    /// <summary>
    /// 字段名称
    /// </summary>

    std::string getColumnName() const;
    bool columnNameIsSet() const;
    void unsetcolumnName();
    void setColumnName(const std::string& value);

    /// <summary>
    /// 备注信息
    /// </summary>

    std::string getComments() const;
    bool commentsIsSet() const;
    void unsetcomments();
    void setComments(const std::string& value);

    /// <summary>
    /// 数据集id
    /// </summary>

    std::string getDataId() const;
    bool dataIdIsSet() const;
    void unsetdataId();
    void setDataId(const std::string& value);

    /// <summary>
    /// 字段类型
    /// </summary>

    std::string getDataType() const;
    bool dataTypeIsSet() const;
    void unsetdataType();
    void setDataType(const std::string& value);

    /// <summary>
    /// 学习数据集标签类型，UNIQUE_ID.唯一标识,FEATURE.特征,LABEL.标签,FILTER.过滤字段
    /// </summary>

    std::string getFlLabelType() const;
    bool flLabelTypeIsSet() const;
    void unsetflLabelType();
    void setFlLabelType(const std::string& value);

    /// <summary>
    /// 是否离散
    /// </summary>

    bool isIsDiscrete() const;
    bool isDiscreteIsSet() const;
    void unsetisDiscrete();
    void setIsDiscrete(bool value);

    /// <summary>
    /// 长度
    /// </summary>

    int32_t getLength() const;
    bool lengthIsSet() const;
    void unsetlength();
    void setLength(int32_t value);

    /// <summary>
    /// 隐私策略，HASH.哈希处理，MASK.掩码，NONE.不处理
    /// </summary>

    std::string getPrivacyPolicy() const;
    bool privacyPolicyIsSet() const;
    void unsetprivacyPolicy();
    void setPrivacyPolicy(const std::string& value);

    /// <summary>
    /// 隐私策略描述
    /// </summary>

    std::string getPrivacyPolicyExt() const;
    bool privacyPolicyExtIsSet() const;
    void unsetprivacyPolicyExt();
    void setPrivacyPolicyExt(const std::string& value);

    /// <summary>
    /// 精度
    /// </summary>

    int32_t getSacle() const;
    bool sacleIsSet() const;
    void unsetsacle();
    void setSacle(int32_t value);

    /// <summary>
    /// 分析数据集字段隐私类别，NON_SENSITIVE.非敏感，SENSITIVE.敏感，UNIQUE_ID.唯一主键
    /// </summary>

    std::string getSqlColPrivacyType() const;
    bool sqlColPrivacyTypeIsSet() const;
    void unsetsqlColPrivacyType();
    void setSqlColPrivacyType(const std::string& value);


protected:
    std::string columnName_;
    bool columnNameIsSet_;
    std::string comments_;
    bool commentsIsSet_;
    std::string dataId_;
    bool dataIdIsSet_;
    std::string dataType_;
    bool dataTypeIsSet_;
    std::string flLabelType_;
    bool flLabelTypeIsSet_;
    bool isDiscrete_;
    bool isDiscreteIsSet_;
    int32_t length_;
    bool lengthIsSet_;
    std::string privacyPolicy_;
    bool privacyPolicyIsSet_;
    std::string privacyPolicyExt_;
    bool privacyPolicyExtIsSet_;
    int32_t sacle_;
    bool sacleIsSet_;
    std::string sqlColPrivacyType_;
    bool sqlColPrivacyTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TICS_V1_MODEL_TicsDatasetColumn_H_
