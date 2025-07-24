
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapRecycle_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapRecycle_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MindmapRecycle
    : public ModelBase
{
public:
    MindmapRecycle();
    virtual ~MindmapRecycle();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MindmapRecycle members

    /// <summary>
    /// app
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 创建时间
    /// </summary>

    std::string getCreateTime() const;
    bool createTimeIsSet() const;
    void unsetcreateTime();
    void setCreateTime(const std::string& value);

    /// <summary>
    /// 创建人名称
    /// </summary>

    std::string getCreatorName() const;
    bool creatorNameIsSet() const;
    void unsetcreatorName();
    void setCreatorName(const std::string& value);

    /// <summary>
    /// 创建人工号
    /// </summary>

    std::string getCreatorNum() const;
    bool creatorNumIsSet() const;
    void unsetcreatorNum();
    void setCreatorNum(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFolderId() const;
    bool folderIdIsSet() const;
    void unsetfolderId();
    void setFolderId(const std::string& value);

    /// <summary>
    /// 根目录id
    /// </summary>

    std::string getFolderRootId() const;
    bool folderRootIdIsSet() const;
    void unsetfolderRootId();
    void setFolderRootId(const std::string& value);

    /// <summary>
    /// id 主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 脑图版本
    /// </summary>

    std::string getMapVersion() const;
    bool mapVersionIsSet() const;
    void unsetmapVersion();
    void setMapVersion(const std::string& value);

    /// <summary>
    /// 脑图JSON
    /// </summary>

    std::string getMindmap() const;
    bool mindmapIsSet() const;
    void unsetmindmap();
    void setMindmap(const std::string& value);

    /// <summary>
    /// 脑图名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 脑图是否私有
    /// </summary>

    std::string getPrivacy() const;
    bool privacyIsSet() const;
    void unsetprivacy();
    void setPrivacy(const std::string& value);

    /// <summary>
    /// 项目id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string app_;
    bool appIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorNum_;
    bool creatorNumIsSet_;
    std::string folderId_;
    bool folderIdIsSet_;
    std::string folderRootId_;
    bool folderRootIdIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string mapVersion_;
    bool mapVersionIsSet_;
    std::string mindmap_;
    bool mindmapIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string privacy_;
    bool privacyIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapRecycle_H_
