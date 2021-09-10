
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_CheckMd5DuplicationResponse_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_CheckMd5DuplicationResponse_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  CheckMd5DuplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    CheckMd5DuplicationResponse();
    virtual ~CheckMd5DuplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CheckMd5DuplicationResponse members

    /// <summary>
    /// 是否重复。  取值如下： - 0：表示不重复。 - 1：表示重复。
    /// </summary>

    int32_t getIsDuplicated() const;
    bool isDuplicatedIsSet() const;
    void unsetisDuplicated();
    void setIsDuplicated(int32_t value);

    /// <summary>
    /// 重复的媒资ID
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);


protected:
    int32_t isDuplicated_;
    bool isDuplicatedIsSet_;
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_CheckMd5DuplicationResponse_H_
