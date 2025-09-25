
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowDiffLinesRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowDiffLinesRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowDiffLinesRequest
    : public ModelBase
{
public:
    ShowDiffLinesRequest();
    virtual ~ShowDiffLinesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDiffLinesRequest members

    /// <summary>
    /// **参数解释：** 仓库的ID，通过[[查询用户所有仓库](https://support.huaweicloud.com/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws)[[查询用户所有仓库](https://support.huaweicloud.com/intl/en-us/api-codeartsrepo/ListUserAllRepositories.html)](tag:hws_hk)[查询项目列表](tag:hcs,hcs_sm)接口查询项目列表获取。 **约束限制：** 不涉及。
    /// </summary>

    int32_t getRepositoryId() const;
    bool repositoryIdIsSet() const;
    void unsetrepositoryId();
    void setRepositoryId(int32_t value);

    /// <summary>
    /// **参数解释：** 文件路径。 **取值范围：** 字符串长度不少于1，不超过10000。
    /// </summary>

    std::string getFilePath() const;
    bool filePathIsSet() const;
    void unsetfilePath();
    void setFilePath(const std::string& value);

    /// <summary>
    /// **参数解释：** commit ID。 **取值范围：** 字符串长度不少于1，不超过40。
    /// </summary>

    std::string getCommitId() const;
    bool commitIdIsSet() const;
    void unsetcommitId();
    void setCommitId(const std::string& value);

    /// <summary>
    /// **参数解释：** 文件开始行数。
    /// </summary>

    int32_t getStart() const;
    bool startIsSet() const;
    void unsetstart();
    void setStart(int32_t value);

    /// <summary>
    /// **参数解释：** 文件结束行数。
    /// </summary>

    int32_t getEnd() const;
    bool endIsSet() const;
    void unsetend();
    void setEnd(int32_t value);


protected:
    int32_t repositoryId_;
    bool repositoryIdIsSet_;
    std::string filePath_;
    bool filePathIsSet_;
    std::string commitId_;
    bool commitIdIsSet_;
    int32_t start_;
    bool startIsSet_;
    int32_t end_;
    bool endIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowDiffLinesRequest& dereference_from_shared_ptr(std::shared_ptr<ShowDiffLinesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowDiffLinesRequest_H_
