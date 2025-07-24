
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapBackup_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapBackup_H_


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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  MindmapBackup
    : public ModelBase
{
public:
    MindmapBackup();
    virtual ~MindmapBackup();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MindmapBackup members

    /// <summary>
    /// 备份名称
    /// </summary>

    std::string getBakName() const;
    bool bakNameIsSet() const;
    void unsetbakName();
    void setBakName(const std::string& value);

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
    /// id 主键
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 备注
    /// </summary>

    std::string getMemo() const;
    bool memoIsSet() const;
    void unsetmemo();
    void setMemo(const std::string& value);

    /// <summary>
    /// 脑图JSON
    /// </summary>

    std::string getMindmap() const;
    bool mindmapIsSet() const;
    void unsetmindmap();
    void setMindmap(const std::string& value);

    /// <summary>
    /// 脑图Id
    /// </summary>

    std::string getMindmapId() const;
    bool mindmapIdIsSet() const;
    void unsetmindmapId();
    void setMindmapId(const std::string& value);

    /// <summary>
    /// 备份类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 更新时间
    /// </summary>

    std::string getUpdateTime() const;
    bool updateTimeIsSet() const;
    void unsetupdateTime();
    void setUpdateTime(const std::string& value);


protected:
    std::string bakName_;
    bool bakNameIsSet_;
    std::string createTime_;
    bool createTimeIsSet_;
    std::string creatorName_;
    bool creatorNameIsSet_;
    std::string creatorNum_;
    bool creatorNumIsSet_;
    std::string id_;
    bool idIsSet_;
    std::string memo_;
    bool memoIsSet_;
    std::string mindmap_;
    bool mindmapIsSet_;
    std::string mindmapId_;
    bool mindmapIdIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string updateTime_;
    bool updateTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_MindmapBackup_H_
