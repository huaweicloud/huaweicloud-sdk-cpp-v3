
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListVariablesRequest_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListVariablesRequest_H_


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
/// Request Object
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  ListVariablesRequest
    : public ModelBase
{
public:
    ListVariablesRequest();
    virtual ~ListVariablesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListVariablesRequest members

    /// <summary>
    /// group_id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 当前页数
    /// </summary>

    std::string getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(const std::string& value);

    /// <summary>
    /// 每页多少记录
    /// </summary>

    std::string getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(const std::string& value);

    /// <summary>
    /// 工程id
    /// </summary>

    std::string getProjectId() const;
    bool projectIdIsSet() const;
    void unsetprojectId();
    void setProjectId(const std::string& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string pageNo_;
    bool pageNoIsSet_;
    std::string pageSize_;
    bool pageSizeIsSet_;
    std::string projectId_;
    bool projectIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListVariablesRequest& dereference_from_shared_ptr(std::shared_ptr<ListVariablesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_ListVariablesRequest_H_
