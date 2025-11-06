
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeMergeRequestBodyDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeMergeRequestBodyDto_H_


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
/// 
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  MergeMergeRequestBodyDto
    : public ModelBase
{
public:
    MergeMergeRequestBodyDto();
    virtual ~MergeMergeRequestBodyDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// MergeMergeRequestBodyDto members

    /// <summary>
    /// 压缩合并信息
    /// </summary>

    std::string getSquashCommitMessage() const;
    bool squashCommitMessageIsSet() const;
    void unsetsquashCommitMessage();
    void setSquashCommitMessage(const std::string& value);

    /// <summary>
    /// 压缩合并
    /// </summary>

    bool isSquash() const;
    bool squashIsSet() const;
    void unsetsquash();
    void setSquash(bool value);

    /// <summary>
    /// 强制合并
    /// </summary>

    bool isForceMerge() const;
    bool forceMergeIsSet() const;
    void unsetforceMerge();
    void setForceMerge(bool value);


protected:
    std::string squashCommitMessage_;
    bool squashCommitMessageIsSet_;
    bool squash_;
    bool squashIsSet_;
    bool forceMerge_;
    bool forceMergeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_MergeMergeRequestBodyDto_H_
