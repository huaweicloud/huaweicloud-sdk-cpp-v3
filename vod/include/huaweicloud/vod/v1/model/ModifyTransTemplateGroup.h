
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTransTemplateGroup_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTransTemplateGroup_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/QualityInfo.h>
#include <string>
#include <huaweicloud/vod/v1/model/Common.h>
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
class HUAWEICLOUD_VOD_V1_EXPORT  ModifyTransTemplateGroup
    : public ModelBase
{
public:
    ModifyTransTemplateGroup();
    virtual ~ModifyTransTemplateGroup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyTransTemplateGroup members

    /// <summary>
    /// 模板组名称。
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 模板组名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 是否设置默认。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 是否自动加密。  取值如下： - 0：表示不加密。 - 1：表示需要加密。  默认值：0。  加密与转码必须要一起进行，当需要加密时，转码参数不能为空，且转码输出格式必须要为HLS。
    /// </summary>

    int32_t getAutoEncrypt() const;
    bool autoEncryptIsSet() const;
    void unsetautoEncrypt();
    void setAutoEncrypt(int32_t value);

    /// <summary>
    /// 画质配置信息列表。
    /// </summary>

    std::vector<QualityInfo>& getQualityInfoList();
    bool qualityInfoListIsSet() const;
    void unsetqualityInfoList();
    void setQualityInfoList(const std::vector<QualityInfo>& value);

    /// <summary>
    /// 绑定的水印模板组ID数组。
    /// </summary>

    std::vector<std::string>& getWatermarkTemplateIds();
    bool watermarkTemplateIdsIsSet() const;
    void unsetwatermarkTemplateIds();
    void setWatermarkTemplateIds(const std::vector<std::string>& value);

    /// <summary>
    /// 模板介绍。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Common getCommon() const;
    bool commonIsSet() const;
    void unsetcommon();
    void setCommon(const Common& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t autoEncrypt_;
    bool autoEncryptIsSet_;
    std::vector<QualityInfo> qualityInfoList_;
    bool qualityInfoListIsSet_;
    std::vector<std::string> watermarkTemplateIds_;
    bool watermarkTemplateIdsIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    Common common_;
    bool commonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ModifyTransTemplateGroup_H_
