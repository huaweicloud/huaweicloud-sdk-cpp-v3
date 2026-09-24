
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_PageInfo_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_PageInfo_H_


#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  PageInfo
    : public ModelBase
{
public:
    PageInfo();
    virtual ~PageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfo members

    /// <summary>
    /// 分页时，作为查询下一页的marker，取值为镜像ID。
    /// </summary>

    std::string getNextMarker() const;
    bool nextMarkerIsSet() const;
    void unsetnextMarker();
    void setNextMarker(const std::string& value);


protected:
    std::string nextMarker_;
    bool nextMarkerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_PageInfo_H_
