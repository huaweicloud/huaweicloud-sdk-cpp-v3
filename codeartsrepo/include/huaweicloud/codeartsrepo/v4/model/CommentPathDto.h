
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommentPathDto_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommentPathDto_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/codeartsrepo/v4/model/LineDiscussionDto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 单文件下检视意见详情。
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  CommentPathDto
    : public ModelBase
{
public:
    CommentPathDto();
    virtual ~CommentPathDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CommentPathDto members

    /// <summary>
    /// **参数解释：** 位于文件对比结果右侧的检视意见集合。
    /// </summary>

    std::vector<LineDiscussionDto>& getNew();
    bool newIsSet() const;
    void unsetnew();
    void setNew(const std::vector<LineDiscussionDto>& value);

    /// <summary>
    /// **参数解释：** 位于文件对比结果左侧的检视意见集合。
    /// </summary>

    std::vector<LineDiscussionDto>& getOld();
    bool oldIsSet() const;
    void unsetold();
    void setOld(const std::vector<LineDiscussionDto>& value);

    /// <summary>
    /// **参数解释：** 文件名。
    /// </summary>

    std::string getPath() const;
    bool pathIsSet() const;
    void unsetpath();
    void setPath(const std::string& value);


protected:
    std::vector<LineDiscussionDto> new_;
    bool newIsSet_;
    std::vector<LineDiscussionDto> old_;
    bool oldIsSet_;
    std::string path_;
    bool pathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_CommentPathDto_H_
