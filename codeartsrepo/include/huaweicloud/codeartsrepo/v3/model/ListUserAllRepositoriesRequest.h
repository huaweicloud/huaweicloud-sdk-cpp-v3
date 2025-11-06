
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListUserAllRepositoriesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListUserAllRepositoriesRequest_H_


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
class HUAWEICLOUD_CODEARTSREPO_V3_EXPORT  ListUserAllRepositoriesRequest
    : public ModelBase
{
public:
    ListUserAllRepositoriesRequest();
    virtual ~ListUserAllRepositoriesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListUserAllRepositoriesRequest members

    /// <summary>
    /// 分页索引，从1开始计数
    /// </summary>

    int32_t getPageIndex() const;
    bool pageIndexIsSet() const;
    void unsetpageIndex();
    void setPageIndex(int32_t value);

    /// <summary>
    /// 每页条目数
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// 搜索关键字
    /// </summary>

    std::string getSearch() const;
    bool searchIsSet() const;
    void unsetsearch();
    void setSearch(const std::string& value);


protected:
    int32_t pageIndex_;
    bool pageIndexIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string search_;
    bool searchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListUserAllRepositoriesRequest& dereference_from_shared_ptr(std::shared_ptr<ListUserAllRepositoriesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V3_MODEL_ListUserAllRepositoriesRequest_H_
