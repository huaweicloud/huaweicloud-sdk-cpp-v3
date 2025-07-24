
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapPageParamV3_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapPageParamV3_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MindmapPageParamV3
    : public ModelBase
{
public:
    MindmapPageParamV3();
    virtual ~MindmapPageParamV3();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MindmapPageParamV3 members

    /// <summary>
    /// 目录ID集合
    /// </summary>

    std::vector<std::string>& getFolderIdCollection();
    bool folderIdCollectionIsSet() const;
    void unsetfolderIdCollection();
    void setFolderIdCollection(const std::vector<std::string>& value);

    /// <summary>
    /// 创建者ID集合
    /// </summary>

    std::vector<std::string>& getCreatorNumCollection();
    bool creatorNumCollectionIsSet() const;
    void unsetcreatorNumCollection();
    void setCreatorNumCollection(const std::vector<std::string>& value);

    /// <summary>
    /// 更新人ID集合
    /// </summary>

    std::vector<std::string>& getUpdaterNumCollection();
    bool updaterNumCollectionIsSet() const;
    void unsetupdaterNumCollection();
    void setUpdaterNumCollection(const std::vector<std::string>& value);

    /// <summary>
    /// 根目录ID
    /// </summary>

    std::string getFolderRootId() const;
    bool folderRootIdIsSet() const;
    void unsetfolderRootId();
    void setFolderRootId(const std::string& value);

    /// <summary>
    /// 主键ID集合
    /// </summary>

    std::vector<std::string>& getIdCollection();
    bool idCollectionIsSet() const;
    void unsetidCollection();
    void setIdCollection(const std::vector<std::string>& value);

    /// <summary>
    /// 起始偏移量，表示从此偏移量开始查询，offset大于等于0，小于等于100000
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 每页显示的条目数量，最大支持200条
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 脑图名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 项目ID
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);

    /// <summary>
    /// 分支uri
    /// </summary>

    std::string getBranchUri() const;
    bool branchUriIsSet() const;
    void unsetbranchUri();
    void setBranchUri(const std::string& value);

    /// <summary>
    /// 是否基线
    /// </summary>

    int32_t getIsMaster() const;
    bool isMasterIsSet() const;
    void unsetisMaster();
    void setIsMaster(int32_t value);

    /// <summary>
    /// 计划uri
    /// </summary>

    std::string getIteratorUri() const;
    bool iteratorUriIsSet() const;
    void unsetiteratorUri();
    void setIteratorUri(const std::string& value);


protected:
    std::vector<std::string> folderIdCollection_;
    bool folderIdCollectionIsSet_;
    std::vector<std::string> creatorNumCollection_;
    bool creatorNumCollectionIsSet_;
    std::vector<std::string> updaterNumCollection_;
    bool updaterNumCollectionIsSet_;
    std::string folderRootId_;
    bool folderRootIdIsSet_;
    std::vector<std::string> idCollection_;
    bool idCollectionIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;
    std::string branchUri_;
    bool branchUriIsSet_;
    int32_t isMaster_;
    bool isMasterIsSet_;
    std::string iteratorUri_;
    bool iteratorUriIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapPageParamV3_H_
