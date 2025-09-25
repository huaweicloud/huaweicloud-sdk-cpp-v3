
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListBranchesByRepositoryIdRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListBranchesByRepositoryIdRequest_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListBranchesByRepositoryIdRequest
    : public ModelBase
{
public:
    ListBranchesByRepositoryIdRequest();
    virtual ~ListBranchesByRepositoryIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListBranchesByRepositoryIdRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

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

    std::string getMatch() const;
    bool matchIsSet() const;
    void unsetmatch();
    void setMatch(const std::string& value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string page_;
    bool pageIsSet_;
    std::string perPage_;
    bool perPageIsSet_;
    std::string match_;
    bool matchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListBranchesByRepositoryIdRequest& dereference_from_shared_ptr(std::shared_ptr<ListBranchesByRepositoryIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListBranchesByRepositoryIdRequest_H_
