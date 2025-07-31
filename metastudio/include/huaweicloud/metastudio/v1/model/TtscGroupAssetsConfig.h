
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscGroupAssetsConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscGroupAssetsConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  TtscGroupAssetsConfig
    : public ModelBase
{
public:
    TtscGroupAssetsConfig();
    virtual ~TtscGroupAssetsConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TtscGroupAssetsConfig members

    /// <summary>
    /// 分组id
    /// </summary>

    std::string getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(const std::string& value);

    /// <summary>
    /// 分组名称
    /// </summary>

    std::string getGroupName() const;
    bool groupNameIsSet() const;
    void unsetgroupName();
    void setGroupName(const std::string& value);

    /// <summary>
    /// 每个分组的资产id列表
    /// </summary>

    std::vector<std::string>& getAssetIds();
    bool assetIdsIsSet() const;
    void unsetassetIds();
    void setAssetIds(const std::vector<std::string>& value);


protected:
    std::string groupId_;
    bool groupIdIsSet_;
    std::string groupName_;
    bool groupNameIsSet_;
    std::vector<std::string> assetIds_;
    bool assetIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_TtscGroupAssetsConfig_H_
