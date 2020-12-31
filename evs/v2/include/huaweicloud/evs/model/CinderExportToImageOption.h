
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageOption_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 将云硬盘导出为镜像的请求参数
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  CinderExportToImageOption
    : public ModelBase
{
public:
    CinderExportToImageOption();
    virtual ~CinderExportToImageOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CinderExportToImageOption members

    /// <summary>
    /// 云硬盘导出镜像的容器类型。  目前支持ami、ari、aki、ovf、bare。默认是bare。
    /// </summary>

    std::string getContainerFormat() const;
    bool containerFormatIsSet() const;
    void unsetcontainerFormat();
    void setContainerFormat(const std::string& value);

    /// <summary>
    /// 云硬盘导出镜像的格式。  目前支持vhd、zvhd、zvhd2、raw、qcow2。默认是vhd。
    /// </summary>

    std::string getDiskFormat() const;
    bool diskFormatIsSet() const;
    void unsetdiskFormat();
    void setDiskFormat(const std::string& value);

    /// <summary>
    /// 强制导出镜像的标示，默认值是false。  当force标记为false时，云硬盘处于正在使用状态时，不能强制导出镜像。 当force标记为true时，即使云硬盘处于正在使用状态时，仍可以导出镜像。
    /// </summary>

    bool isForce() const;
    bool forceIsSet() const;
    void unsetforce();
    void setForce(bool value);

    /// <summary>
    /// 云硬盘导出镜像的名称。  名称的长度范围为1～128位。 名称只能包含以下字符：大写字母、小写字母、中文、数字、特殊字符包含“-”、“.”、“_”和空格。
    /// </summary>

    std::string getImageName() const;
    bool imageNameIsSet() const;
    void unsetimageName();
    void setImageName(const std::string& value);

    /// <summary>
    /// 云硬盘导出镜像的系统类型。目前只支持“windows”和“linux”，默认值是“linux”。  说明： 只有云硬盘的volume_image_metadata信息中无“__os_type”字段且云硬盘状态为“available”时，设置的__os_type才会生效。 如果不传递该参数，则使用默认的“linux”值作为镜像的系统类型。
    /// </summary>

    std::string getOsType() const;
    bool osTypeIsSet() const;
    void unsetosType();
    void setOsType(const std::string& value);


protected:
    std::string containerFormat_;
    bool containerFormatIsSet_;
    std::string diskFormat_;
    bool diskFormatIsSet_;
    bool force_;
    bool forceIsSet_;
    std::string imageName_;
    bool imageNameIsSet_;
    std::string osType_;
    bool osTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_CinderExportToImageOption_H_
