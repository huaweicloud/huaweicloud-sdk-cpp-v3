
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PushEventPayloadDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PushEventPayloadDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 推送动态负载。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  PushEventPayloadDto
    : public ModelBase
{
public:
    PushEventPayloadDto();
    virtual ~PushEventPayloadDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PushEventPayloadDto members

    /// <summary>
    /// **参数解释：** 提交数量。
    /// </summary>

    int32_t getCommitCount() const;
    bool commitCountIsSet() const;
    void unsetcommitCount();
    void setCommitCount(int32_t value);

    /// <summary>
    /// **参数解释：** 操作类型。
    /// </summary>

    std::string getAction() const;
    bool actionIsSet() const;
    void unsetaction();
    void setAction(const std::string& value);

    /// <summary>
    /// **参数解释：** ref类型。
    /// </summary>

    std::string getRefType() const;
    bool refTypeIsSet() const;
    void unsetrefType();
    void setRefType(const std::string& value);

    /// <summary>
    /// **参数解释：** 源Commit。
    /// </summary>

    std::string getCommitFrom() const;
    bool commitFromIsSet() const;
    void unsetcommitFrom();
    void setCommitFrom(const std::string& value);

    /// <summary>
    /// **参数解释：** 目标Commit。
    /// </summary>

    std::string getCommitTo() const;
    bool commitToIsSet() const;
    void unsetcommitTo();
    void setCommitTo(const std::string& value);

    /// <summary>
    /// **参数解释：** 分支。
    /// </summary>

    std::string getRef() const;
    bool refIsSet() const;
    void unsetref();
    void setRef(const std::string& value);

    /// <summary>
    /// **参数解释：** 提交标题。
    /// </summary>

    std::string getCommitTitle() const;
    bool commitTitleIsSet() const;
    void unsetcommitTitle();
    void setCommitTitle(const std::string& value);


protected:
    int32_t commitCount_;
    bool commitCountIsSet_;
    std::string action_;
    bool actionIsSet_;
    std::string refType_;
    bool refTypeIsSet_;
    std::string commitFrom_;
    bool commitFromIsSet_;
    std::string commitTo_;
    bool commitToIsSet_;
    std::string ref_;
    bool refIsSet_;
    std::string commitTitle_;
    bool commitTitleIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_PushEventPayloadDto_H_
