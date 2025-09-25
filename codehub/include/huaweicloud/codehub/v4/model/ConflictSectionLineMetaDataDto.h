
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ConflictSectionLineMetaDataDto_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ConflictSectionLineMetaDataDto_H_


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
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ConflictSectionLineMetaDataDto
    : public ModelBase
{
public:
    ConflictSectionLineMetaDataDto();
    virtual ~ConflictSectionLineMetaDataDto();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ConflictSectionLineMetaDataDto members

    /// <summary>
    /// 旧列位置
    /// </summary>

    int32_t getOldPos() const;
    bool oldPosIsSet() const;
    void unsetoldPos();
    void setOldPos(int32_t value);

    /// <summary>
    /// 新列位置
    /// </summary>

    int32_t getNewPos() const;
    bool newPosIsSet() const;
    void unsetnewPos();
    void setNewPos(int32_t value);


protected:
    int32_t oldPos_;
    bool oldPosIsSet_;
    int32_t newPos_;
    bool newPosIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ConflictSectionLineMetaDataDto_H_
