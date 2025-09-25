
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListRelatedCommitsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListRelatedCommitsRequest_H_


#include <huaweicloud/codehub/v3/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListRelatedCommitsRequest
    : public ModelBase
{
public:
    ListRelatedCommitsRequest();
    virtual ~ListRelatedCommitsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListRelatedCommitsRequest members

    /// <summary>
    /// 仓库长id
    /// </summary>

    std::string getRepositoryUuid() const;
    bool repositoryUuidIsSet() const;
    void unsetrepositoryUuid();
    void setRepositoryUuid(const std::string& value);

    /// <summary>
    /// 关联工作项类型
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 查询关键字
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页数量
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);


protected:
    std::string repositoryUuid_;
    bool repositoryUuidIsSet_;
    int32_t type_;
    bool typeIsSet_;
    std::string search_;
    bool searchIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListRelatedCommitsRequest& dereference_from_shared_ptr(std::shared_ptr<ListRelatedCommitsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListRelatedCommitsRequest_H_
