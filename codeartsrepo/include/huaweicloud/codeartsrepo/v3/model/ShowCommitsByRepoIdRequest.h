
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowCommitsByRepoIdRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowCommitsByRepoIdRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ShowCommitsByRepoIdRequest
    : public ModelBase
{
public:
    ShowCommitsByRepoIdRequest();
    virtual ~ShowCommitsByRepoIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowCommitsByRepoIdRequest members

    /// <summary>
    /// 提交作者
    /// </summary>

    std::string getAuthor() const;
    bool authorIsSet() const;
    void unsetauthor();
    void setAuthor(const std::string& value);

    /// <summary>
    /// 起始提交日期，格式为yyyy-MM-dd
    /// </summary>

    std::string getBeginDate() const;
    bool beginDateIsSet() const;
    void unsetbeginDate();
    void setBeginDate(const std::string& value);

    /// <summary>
    /// 终止提交日期，格式为yyyy-MM-dd
    /// </summary>

    std::string getEndDate() const;
    bool endDateIsSet() const;
    void unsetendDate();
    void setEndDate(const std::string& value);

    /// <summary>
    /// 提交信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 分页索引
    /// </summary>

    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(int32_t value);

    /// <summary>
    /// 每页数据量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 分支或标签名，支持SHA格式
    /// </summary>

    std::string getRefName() const;
    bool refNameIsSet() const;
    void unsetrefName();
    void setRefName(const std::string& value);

    /// <summary>
    /// 仓库主键id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 提交的文件变更详情信息（不包含diff）
    /// </summary>

    std::string getStatFormat() const;
    bool statFormatIsSet() const;
    void unsetstatFormat();
    void setStatFormat(const std::string& value);


protected:
    std::string author_;
    bool authorIsSet_;
    std::string beginDate_;
    bool beginDateIsSet_;
    std::string endDate_;
    bool endDateIsSet_;
    std::string message_;
    bool messageIsSet_;
    int32_t pageIndex_;
    bool pageIndexIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string path_;
    bool pathIsSet_;
    std::string refName_;
    bool refNameIsSet_;
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string statFormat_;
    bool statFormatIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowCommitsByRepoIdRequest& dereference_from_shared_ptr(std::shared_ptr<ShowCommitsByRepoIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ShowCommitsByRepoIdRequest_H_
