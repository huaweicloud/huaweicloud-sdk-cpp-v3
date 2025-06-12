
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleInfo_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleInfo_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/StyleAssetItem.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/CreateStyleRequestBody.h>
#include <vector>
#include <huaweicloud/metastudio/v1/model/StyleExtraMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 服务开通请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  StyleInfo
    : public ModelBase
{
public:
    StyleInfo();
    virtual ~StyleInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StyleInfo members

    /// <summary>
    /// 数字人风格化名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 数字人风格化描述
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 租户ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 性别
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 标签。单个标签16字节，多个用逗号分隔，最多50个。
    /// </summary>

    std::vector<std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<std::string>& value);

    /// <summary>
    /// 风格化素材资产组合。
    /// </summary>

    std::vector<StyleAssetItem>& getStyleAssets();
    bool styleAssetsIsSet() const;
    void unsetstyleAssets();
    void setStyleAssets(const std::vector<StyleAssetItem>& value);

    /// <summary>
    /// 
    /// </summary>

    StyleExtraMeta getExtraMeta() const;
    bool extraMetaIsSet() const;
    void unsetextraMeta();
    void setExtraMeta(const StyleExtraMeta& value);

    /// <summary>
    /// 数字人风格ID
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 数字人风格创建时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 数字人风格更新时间，格式遵循：RFC 3339。 例 “2020-07-30T10:43:17Z”。
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);

    /// <summary>
    /// 数字人风格状态枚举 * CREATING：创建中 * PUBLISHED：已发布 * DELETED：已删除 * UNPUBLISHED：未发布 * PUBLISHING：发布中
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::vector<std::string> tags_;
    bool tagsIsSet_;
    std::vector<StyleAssetItem> styleAssets_;
    bool styleAssetsIsSet_;
    StyleExtraMeta extraMeta_;
    bool extraMetaIsSet_;
    std::string styleId_;
    bool styleIdIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;
    std::string state_;
    bool stateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_StyleInfo_H_
