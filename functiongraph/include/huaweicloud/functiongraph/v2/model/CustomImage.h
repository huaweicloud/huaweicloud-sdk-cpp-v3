
#ifndef HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CustomImage_H_
#define HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CustomImage_H_


#include <huaweicloud/functiongraph/v2/FunctionGraphExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 用户容器镜像。
/// </summary>
class HUAWEICLOUD_FUNCTIONGRAPH_V2_EXPORT  CustomImage
    : public ModelBase
{
public:
    CustomImage();
    virtual ~CustomImage();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CustomImage members

    /// <summary>
    /// 是否启用
    /// </summary>

    bool isEnabled() const;
    bool enabledIsSet() const;
    void unsetenabled();
    void setEnabled(bool value);

    /// <summary>
    /// 镜像地址
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 启动容器镜像的命令
    /// </summary>

    std::string getCommand() const;
    bool commandIsSet() const;
    void unsetcommand();
    void setCommand(const std::string& value);

    /// <summary>
    /// 启动容器镜像的命令行参数
    /// </summary>

    std::string getArgs() const;
    bool argsIsSet() const;
    void unsetargs();
    void setArgs(const std::string& value);

    /// <summary>
    /// 镜像容器工作目录
    /// </summary>

    std::string getWorkingDir() const;
    bool workingDirIsSet() const;
    void unsetworkingDir();
    void setWorkingDir(const std::string& value);

    /// <summary>
    /// 镜像容器的用户id
    /// </summary>

    std::string getUid() const;
    bool uidIsSet() const;
    void unsetuid();
    void setUid(const std::string& value);

    /// <summary>
    /// 镜像容器的用户组id
    /// </summary>

    std::string getGid() const;
    bool gidIsSet() const;
    void unsetgid();
    void setGid(const std::string& value);

    /// <summary>
    /// 是否是公共镜像
    /// </summary>

    bool isIsPublic() const;
    bool isPublicIsSet() const;
    void unsetisPublic();
    void setIsPublic(bool value);


protected:
    bool enabled_;
    bool enabledIsSet_;
    std::string image_;
    bool imageIsSet_;
    std::string command_;
    bool commandIsSet_;
    std::string args_;
    bool argsIsSet_;
    std::string workingDir_;
    bool workingDirIsSet_;
    std::string uid_;
    bool uidIsSet_;
    std::string gid_;
    bool gidIsSet_;
    bool isPublic_;
    bool isPublicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_FUNCTIONGRAPH_V2_MODEL_CustomImage_H_
