
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordObsFileAddr_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordObsFileAddr_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  RecordObsFileAddr
    : public ModelBase
{
public:
    RecordObsFileAddr();
    virtual ~RecordObsFileAddr();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RecordObsFileAddr members

    /// <summary>
    /// OBS的bucket名称
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// OBS Bucket所在RegionID
    /// </summary>

    std::string getLocation() const;
    bool locationIsSet() const;
    void unsetlocation();
    void setLocation(const std::string& value);

    /// <summary>
    /// OBS对象路径，遵守OBS Object定义。如果为空则保存到根目录
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    std::string location_;
    bool locationIsSet_;
    std::string object_;
    bool objectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_RecordObsFileAddr_H_
