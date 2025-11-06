
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListMergeChangesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListMergeChangesRequest_H_


#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ListMergeChangesRequest
    : public ModelBase
{
public:
    ListMergeChangesRequest();
    virtual ~ListMergeChangesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeChangesRequest members

    /// <summary>
    /// 仓库主键id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// MR长id
    /// </summary>

    std::string getMergeRequestIid() const;
    bool mergeRequestIidIsSet() const;
    void unsetmergeRequestIid();
    void setMergeRequestIid(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// 是否无视空格
    /// </summary>

    bool isIgnoreWhitespaceChange() const;
    bool ignoreWhitespaceChangeIsSet() const;
    void unsetignoreWhitespaceChange();
    void setIgnoreWhitespaceChange(bool value);

    /// <summary>
    /// 是否需要编码
    /// </summary>

    bool isForceEncode() const;
    bool forceEncodeIsSet() const;
    void unsetforceEncode();
    void setForceEncode(bool value);

    /// <summary>
    /// 是否为建议视图
    /// </summary>

    std::string getView() const;
    bool viewIsSet() const;
    void unsetview();
    void setView(const std::string& value);

    /// <summary>
    /// commit的id
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string mergeRequestIid_;
    bool mergeRequestIidIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    bool ignoreWhitespaceChange_;
    bool ignoreWhitespaceChangeIsSet_;
    bool forceEncode_;
    bool forceEncodeIsSet_;
    std::string view_;
    bool viewIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMergeChangesRequest& dereference_from_shared_ptr(std::shared_ptr<ListMergeChangesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListMergeChangesRequest_H_
