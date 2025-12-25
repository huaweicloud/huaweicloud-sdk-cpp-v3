
#ifndef HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListFileBuildArchivesRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListFileBuildArchivesRequest_H_


#include <huaweicloud/codeartsartifact/v2/CodeArtsArtifactExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSARTIFACT_V2_EXPORT  ListFileBuildArchivesRequest
    : public ModelBase
{
public:
    ListFileBuildArchivesRequest();
    virtual ~ListFileBuildArchivesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListFileBuildArchivesRequest members

    /// <summary>
    /// 父节点id
    /// </summary>

    std::string getParentId() const;
    bool parentIdIsSet() const;
    void unsetparentId();
    void setParentId(const std::string& value);

    /// <summary>
    /// 构建id
    /// </summary>

    std::string getBuildId() const;
    bool buildIdIsSet() const;
    void unsetbuildId();
    void setBuildId(const std::string& value);

    /// <summary>
    /// 构建序号
    /// </summary>

    std::string getBuildNo() const;
    bool buildNoIsSet() const;
    void unsetbuildNo();
    void setBuildNo(const std::string& value);

    /// <summary>
    /// 页数
    /// </summary>

    int32_t getPageNo() const;
    bool pageNoIsSet() const;
    void unsetpageNo();
    void setPageNo(int32_t value);

    /// <summary>
    /// 每页数据量
    /// </summary>

    int32_t getPageSize() const;
    bool pageSizeIsSet() const;
    void unsetpageSize();
    void setPageSize(int32_t value);

    /// <summary>
    /// codehub仓库分支
    /// </summary>

    std::string getRepoBranch() const;
    bool repoBranchIsSet() const;
    void unsetrepoBranch();
    void setRepoBranch(const std::string& value);


protected:
    std::string parentId_;
    bool parentIdIsSet_;
    std::string buildId_;
    bool buildIdIsSet_;
    std::string buildNo_;
    bool buildNoIsSet_;
    int32_t pageNo_;
    bool pageNoIsSet_;
    int32_t pageSize_;
    bool pageSizeIsSet_;
    std::string repoBranch_;
    bool repoBranchIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListFileBuildArchivesRequest& dereference_from_shared_ptr(std::shared_ptr<ListFileBuildArchivesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSARTIFACT_V2_MODEL_ListFileBuildArchivesRequest_H_
