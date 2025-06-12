
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateStyleRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateStyleRequestBody_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/StyleAssetItem.h>
#include <string>
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
/// 创建风格请求
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateStyleRequestBody
    : public ModelBase
{
public:
    CreateStyleRequestBody();
    virtual ~CreateStyleRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateStyleRequestBody members

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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateStyleRequestBody_H_
