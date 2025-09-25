
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_GetAllRepositoryByProjectIdRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_GetAllRepositoryByProjectIdRequest_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  GetAllRepositoryByProjectIdRequest
    : public ModelBase
{
public:
    GetAllRepositoryByProjectIdRequest();
    virtual ~GetAllRepositoryByProjectIdRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// GetAllRepositoryByProjectIdRequest members

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
    /// 项目ID，获取方式请参见[获取项目ID](codehub_api_0014.xml)。
    /// </summary>

    std::string getProjectUuid() const;
    bool projectUuidIsSet() const;
    void unsetprojectUuid();
    void setProjectUuid(const std::string& value);

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
    std::string projectUuid_;
    bool projectUuidIsSet_;
    std::string search_;
    bool searchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    GetAllRepositoryByProjectIdRequest& dereference_from_shared_ptr(std::shared_ptr<GetAllRepositoryByProjectIdRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_GetAllRepositoryByProjectIdRequest_H_
