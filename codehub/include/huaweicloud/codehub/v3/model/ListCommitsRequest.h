
#ifndef HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitsRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitsRequest_H_


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
class HUAWEICLOUD_CODEHUB_V3_EXPORT  ListCommitsRequest
    : public ModelBase
{
public:
    ListCommitsRequest();
    virtual ~ListCommitsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCommitsRequest members

    /// <summary>
    /// 仓库短id
    /// </summary>

    int32_t getRepoId() const;
    bool repoIdIsSet() const;
    void unsetrepoId();
    void setRepoId(int32_t value);

    /// <summary>
    /// 仓库的branch名或tag名，如果为空则查询默认分支
    /// </summary>

    std::string getRefName() const;
    bool refNameIsSet() const;
    void unsetrefName();
    void setRefName(const std::string& value);

    /// <summary>
    /// 在此日期之后或当天提交，格式 YYYY-MM-DDTHH:MM:SSZ
    /// </summary>

    std::string getSince() const;
    bool sinceIsSet() const;
    void unsetsince();
    void setSince(const std::string& value);

    /// <summary>
    /// 在此日期之前或当天提交，格式 YYYY-MM-DDTHH:MM:SSZ
    /// </summary>

    std::string getUntil() const;
    bool untilIsSet() const;
    void unsetuntil();
    void setUntil(const std::string& value);

    /// <summary>
    /// 文件路径
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);

    /// <summary>
    /// 是否检索仓库中每个提交
    /// </summary>

    bool isAll() const;
    bool allIsSet() const;
    void unsetall();
    void setAll(bool value);

    /// <summary>
    /// 有关每个提交的统计信息是否添加到响应中
    /// </summary>

    bool isWithStats() const;
    bool withStatsIsSet() const;
    void unsetwithStats();
    void setWithStats(bool value);

    /// <summary>
    /// 页码
    /// </summary>

    int32_t getPage() const;
    bool pageIsSet() const;
    void unsetpage();
    void setPage(int32_t value);

    /// <summary>
    /// 每页条目数
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);


protected:
    int32_t repoId_;
    bool repoIdIsSet_;
    std::string refName_;
    bool refNameIsSet_;
    std::string since_;
    bool sinceIsSet_;
    std::string until_;
    bool untilIsSet_;
    std::string path_;
    bool pathIsSet_;
    bool all_;
    bool allIsSet_;
    bool withStats_;
    bool withStatsIsSet_;
    int32_t page_;
    bool pageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListCommitsRequest& dereference_from_shared_ptr(std::shared_ptr<ListCommitsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V3_MODEL_ListCommitsRequest_H_
