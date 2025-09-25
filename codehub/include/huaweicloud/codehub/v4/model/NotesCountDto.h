
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_NotesCountDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_NotesCountDto_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  NotesCountDto
    : public ModelBase
{
public:
    NotesCountDto();
    virtual ~NotesCountDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NotesCountDto members

    /// <summary>
    /// 检视意见总数
    /// </summary>

    int32_t getNotesCount() const;
    bool notesCountIsSet() const;
    void unsetnotesCount();
    void setNotesCount(int32_t value);

    /// <summary>
    /// 未解决的检视意见数量
    /// </summary>

    int32_t getUnresolvedNotesCount() const;
    bool unresolvedNotesCountIsSet() const;
    void unsetunresolvedNotesCount();
    void setUnresolvedNotesCount(int32_t value);

    /// <summary>
    /// 已解决的检视意见数量
    /// </summary>

    int32_t getAlreadyResolvedCount() const;
    bool alreadyResolvedCountIsSet() const;
    void unsetalreadyResolvedCount();
    void setAlreadyResolvedCount(int32_t value);

    /// <summary>
    /// 需要解决的检视意见总数
    /// </summary>

    int32_t getNeedResolvedCount() const;
    bool needResolvedCountIsSet() const;
    void unsetneedResolvedCount();
    void setNeedResolvedCount(int32_t value);


protected:
    int32_t notesCount_;
    bool notesCountIsSet_;
    int32_t unresolvedNotesCount_;
    bool unresolvedNotesCountIsSet_;
    int32_t alreadyResolvedCount_;
    bool alreadyResolvedCountIsSet_;
    int32_t needResolvedCount_;
    bool needResolvedCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_NotesCountDto_H_
