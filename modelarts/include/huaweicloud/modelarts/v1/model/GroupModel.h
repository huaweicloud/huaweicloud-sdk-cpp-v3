
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupModel_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupModel_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 模型存储挂载配置。 **约束限制：** 不涉及。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  GroupModel
    : public ModelBase
{
public:
    GroupModel();
    virtual ~GroupModel();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GroupModel members

    /// <summary>
    /// **参数解释：** 代码来源类别。 **约束限制：** 不涉及。 **取值范围：** 如下参数不区分大小写 - OBS：对象存储服务。 - OBSFS：OBS的文件系统接口。 - EFS：弹性文件服务。 - [TRAIN：训练作业。](tag:hws) - LOCAL：挂载宿主机本地存储目录。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSource() const;
    bool sourceIsSet() const;
    void unsetsource();
    void setSource(const std::string& value);

    /// <summary>
    /// **参数解释：** 代码来源地址，格式遵循不同存储系统。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载到容器内的路径，要求以/开头，后面可包含中划线，反斜杠，下划线，点号，字母，数字。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getMountPath() const;
    bool mountPathIsSet() const;
    void unsetmountPath();
    void setMountPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 是否支持模型本地缓存，默认是不支持。 **约束限制：** 不涉及。 **取值范围：** - true：支持。 - false：不支持。 **默认取值：** false。
    /// </summary>

    bool isHostCache() const;
    bool hostCacheIsSet() const;
    void unsethostCache();
    void setHostCache(bool value);

    /// <summary>
    /// **参数解释：** 当存储类别为EFS时，支持配置子目录。 **约束限制：** 不涉及。 **取值范围：** 不涉及。 **默认取值：** 不涉及。
    /// </summary>

    std::string getEfsSubPath() const;
    bool efsSubPathIsSet() const;
    void unsetefsSubPath();
    void setEfsSubPath(const std::string& value);

    /// <summary>
    /// **参数解释：** 挂载权限设置，是否只读。 **约束限制：** 不涉及。 **取值范围：** - true：只读。 - false：非只读。 **默认取值：** 不涉及。
    /// </summary>

    bool isReadOnly() const;
    bool readOnlyIsSet() const;
    void unsetreadOnly();
    void setReadOnly(bool value);

    /// <summary>
    /// **参数解释：** os预热。 **约束限制：** 不涉及。 **取值范围：** - true：预热。 - false：不预热。 **默认取值：** 不涉及。
    /// </summary>

    bool isOsWarmUp() const;
    bool osWarmUpIsSet() const;
    void unsetosWarmUp();
    void setOsWarmUp(bool value);

    /// <summary>
    /// **参数解释：** 预热名称。 **约束限制：** os_warm_up为true时必填。 **取值范围：** 支持1-64位字符，可包含字母、中文、数字、中划线、下划线。 **默认取值：** 不涉及。
    /// </summary>

    std::string getSourceName() const;
    bool sourceNameIsSet() const;
    void unsetsourceName();
    void setSourceName(const std::string& value);

    /// <summary>
    /// 参数解释： 预置资产id。 取值范围： 支持1-64位字符，可包含字母、中文、数字、中划线、下划线。
    /// </summary>

    std::string getAssetId() const;
    bool assetIdIsSet() const;
    void unsetassetId();
    void setAssetId(const std::string& value);


protected:
    std::string source_;
    bool sourceIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string mountPath_;
    bool mountPathIsSet_;
    bool hostCache_;
    bool hostCacheIsSet_;
    std::string efsSubPath_;
    bool efsSubPathIsSet_;
    bool readOnly_;
    bool readOnlyIsSet_;
    bool osWarmUp_;
    bool osWarmUpIsSet_;
    std::string sourceName_;
    bool sourceNameIsSet_;
    std::string assetId_;
    bool assetIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_GroupModel_H_
