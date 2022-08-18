
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTransTemplate_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTransTemplate_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/CommonInfo.h>
#include <string>
#include <huaweicloud/vod/v1/model/QualityInfoList.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ModifyTransTemplate
    : public ModelBase
{
public:
    ModifyTransTemplate();
    virtual ~ModifyTransTemplate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ModifyTransTemplate members

    /// <summary>
    /// 模板组名称&lt;br/&gt; 
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 模板组名称&lt;br/&gt; 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否是默认转码模板&lt;br/&gt; 
    /// </summary>

    bool isIsDefault() const;
    bool isDefaultIsSet() const;
    void unsetisDefault();
    void setIsDefault(bool value);

    /// <summary>
    /// 是否开启加密
    /// </summary>

    bool isIsAutoEncrypt() const;
    bool isAutoEncryptIsSet() const;
    void unsetisAutoEncrypt();
    void setIsAutoEncrypt(bool value);

    /// <summary>
    /// 画质配置信息列表&lt;br/&gt; 
    /// </summary>

    std::vector<QualityInfoList>& getQualityInfoList();
    bool qualityInfoListIsSet() const;
    void unsetqualityInfoList();
    void setQualityInfoList(const std::vector<QualityInfoList>& value);

    /// <summary>
    /// 绑定的水印模板组ID数组&lt;br/&gt; 
    /// </summary>

    std::vector<std::string>& getWatermarkTemplateIds();
    bool watermarkTemplateIdsIsSet() const;
    void unsetwatermarkTemplateIds();
    void setWatermarkTemplateIds(const std::vector<std::string>& value);

    /// <summary>
    /// 模板介绍&lt;br/&gt; 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    CommonInfo getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const CommonInfo& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    bool isDefault_;
    bool isDefaultIsSet_;
    bool isAutoEncrypt_;
    bool isAutoEncryptIsSet_;
    std::vector<QualityInfoList> qualityInfoList_;
    bool qualityInfoListIsSet_;
    std::vector<std::string> watermarkTemplateIds_;
    bool watermarkTemplateIdsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    CommonInfo common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTransTemplate_H_
