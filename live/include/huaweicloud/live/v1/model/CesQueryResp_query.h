
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesQueryResp_query_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesQueryResp_query_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/CesDimsItem.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// ces查询响应内容
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CesQueryResp_query
    : public ModelBase
{
public:
    CesQueryResp_query();
    virtual ~CesQueryResp_query();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CesQueryResp_query members

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getMedialiveMpc() const;
    bool medialiveMpcIsSet() const;
    void unsetmedialiveMpc();
    void setMedialiveMpc(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getPipeline() const;
    bool pipelineIsSet() const;
    void unsetpipeline();
    void setPipeline(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getMedialiveCdn() const;
    bool medialiveCdnIsSet() const;
    void unsetmedialiveCdn();
    void setMedialiveCdn(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getMedialivePackage() const;
    bool medialivePackageIsSet() const;
    void unsetmedialivePackage();
    void setMedialivePackage(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getMedialiveConnect() const;
    bool medialiveConnectIsSet() const;
    void unsetmedialiveConnect();
    void setMedialiveConnect(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getMedialiveTailor() const;
    bool medialiveTailorIsSet() const;
    void unsetmedialiveTailor();
    void setMedialiveTailor(const CesDimsItem& value);

    /// <summary>
    /// 
    /// </summary>

    CesDimsItem getRegion() const;
    bool regionIsSet() const;
    void unsetregion();
    void setRegion(const CesDimsItem& value);


protected:
    CesDimsItem medialiveMpc_;
    bool medialiveMpcIsSet_;
    CesDimsItem pipeline_;
    bool pipelineIsSet_;
    CesDimsItem audio_;
    bool audioIsSet_;
    CesDimsItem medialiveCdn_;
    bool medialiveCdnIsSet_;
    CesDimsItem medialivePackage_;
    bool medialivePackageIsSet_;
    CesDimsItem medialiveConnect_;
    bool medialiveConnectIsSet_;
    CesDimsItem medialiveTailor_;
    bool medialiveTailorIsSet_;
    CesDimsItem region_;
    bool regionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CesQueryResp_query_H_
