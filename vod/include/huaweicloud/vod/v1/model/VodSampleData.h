
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_VodSampleData_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_VodSampleData_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  VodSampleData
    : public ModelBase
{
public:
    VodSampleData();
    virtual ~VodSampleData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// VodSampleData members

    /// <summary>
    /// 存储空间。  单位：GB。
    /// </summary>

    float getStorage() const;
    bool storageIsSet() const;
    void unsetstorage();
    void setStorage(float value);

    /// <summary>
    /// 转码时长。  单位：秒。
    /// </summary>

    int64_t getTranscode() const;
    bool transcodeIsSet() const;
    void unsettranscode();
    void setTranscode(int64_t value);


protected:
    float storage_;
    bool storageIsSet_;
    int64_t transcode_;
    bool transcodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_VodSampleData_H_
