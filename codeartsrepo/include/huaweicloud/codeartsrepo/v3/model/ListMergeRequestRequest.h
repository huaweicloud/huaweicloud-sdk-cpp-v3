
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListMergeRequestRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListMergeRequestRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ListMergeRequestRequest
    : public ModelBase
{
public:
    ListMergeRequestRequest();
    virtual ~ListMergeRequestRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListMergeRequestRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// 匹配条件
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// 分页页数
    /// </summary>

    std::string getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(const std::string& value);

    /// <summary>
    /// 每页数据数
    /// </summary>

    std::string getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(const std::string& value);

    /// <summary>
    /// 匹配条件
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string page_;
    bool pageIsSet_;
    std::string perPage_;
    bool perPageIsSet_;
    std::string search_;
    bool searchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListMergeRequestRequest& dereference_from_shared_ptr(std::shared_ptr<ListMergeRequestRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListMergeRequestRequest_H_
