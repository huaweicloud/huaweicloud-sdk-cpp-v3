
#ifndef HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioTrack_H_
#define HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioTrack_H_


#include <huaweicloud/mpc/v1/MpcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MPC_V1_EXPORT  AudioTrack
    : public ModelBase
{
public:
    AudioTrack();
    virtual ~AudioTrack();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AudioTrack members

    /// <summary>
    /// 音轨选取方式。 - 0：默认选取 - 1：手动选择 
    /// </summary>

    int32_t getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(int32_t value);

    /// <summary>
    /// 选取左声道所在的音轨编号。 
    /// </summary>

    int32_t getLeft() const;
    bool leftIsSet() const;
    void unsetleft();
    void setLeft(int32_t value);

    /// <summary>
    /// 选取右声道所在的音轨编号。 
    /// </summary>

    int32_t getRight() const;
    bool rightIsSet() const;
    void unsetright();
    void setRight(int32_t value);


protected:
    int32_t type_;
    bool typeIsSet_;
    int32_t left_;
    bool leftIsSet_;
    int32_t right_;
    bool rightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MODEL_AudioTrack_H_
