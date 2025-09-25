
#ifndef HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Source_H_
#define HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Source_H_


#include <huaweicloud/codeartspipeline/v2/CodeArtsPipelineExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 源码仓库参数
/// </summary>
class HUAWEICLOUD_CODEARTSPIPELINE_V2_EXPORT  Source
    : public ModelBase
{
public:
    Source();
    virtual ~Source();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Source members

    /// <summary>
    /// 源码仓名字
    /// </summary>

    std::string getCodehubName() const;
    bool codehubNameIsSet() const;
    void unsetcodehubName();
    void setCodehubName(const std::string& value);

    /// <summary>
    /// 触发分支
    /// </summary>

    std::vector<std::string>& getBranches();
    bool branchesIsSet() const;
    void unsetbranches();
    void setBranches(const std::vector<std::string>& value);

    /// <summary>
    /// 源码仓来源
    /// </summary>

    std::string getScmType() const;
    bool scmTypeIsSet() const;
    void unsetscmType();
    void setScmType(const std::string& value);

    /// <summary>
    /// 是否开启触发执行流水线功能
    /// </summary>

    bool isHookFlag() const;
    bool hookFlagIsSet() const;
    void unsethookFlag();
    void setHookFlag(bool value);

    /// <summary>
    /// 触发分支
    /// </summary>

    std::string getBranch() const;
    bool branchIsSet() const;
    void unsetbranch();
    void setBranch(const std::string& value);

    /// <summary>
    /// 源码仓ssh地址
    /// </summary>

    std::string getGitUrl() const;
    bool gitUrlIsSet() const;
    void unsetgitUrl();
    void setGitUrl(const std::string& value);

    /// <summary>
    /// 源码仓ID
    /// </summary>

    std::string getCodehubId() const;
    bool codehubIdIsSet() const;
    void unsetcodehubId();
    void setCodehubId(const std::string& value);

    /// <summary>
    /// 源码仓首页url
    /// </summary>

    std::string getWebUrl() const;
    bool webUrlIsSet() const;
    void unsetwebUrl();
    void setWebUrl(const std::string& value);

    /// <summary>
    /// 分支列表
    /// </summary>

    std::vector<std::string>& getBranchList();
    bool branchListIsSet() const;
    void unsetbranchList();
    void setBranchList(const std::vector<std::string>& value);

    /// <summary>
    /// 初始化ID
    /// </summary>

    std::string getInitId() const;
    bool initIdIsSet() const;
    void unsetinitId();
    void setInitId(const std::string& value);

    /// <summary>
    /// 是否废弃
    /// </summary>

    bool isDisable() const;
    bool disableIsSet() const;
    void unsetdisable();
    void setDisable(bool value);


protected:
    std::string codehubName_;
    bool codehubNameIsSet_;
    std::vector<std::string> branches_;
    bool branchesIsSet_;
    std::string scmType_;
    bool scmTypeIsSet_;
    bool hookFlag_;
    bool hookFlagIsSet_;
    std::string branch_;
    bool branchIsSet_;
    std::string gitUrl_;
    bool gitUrlIsSet_;
    std::string codehubId_;
    bool codehubIdIsSet_;
    std::string webUrl_;
    bool webUrlIsSet_;
    std::vector<std::string> branchList_;
    bool branchListIsSet_;
    std::string initId_;
    bool initIdIsSet_;
    bool disable_;
    bool disableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSPIPELINE_V2_MODEL_Source_H_
