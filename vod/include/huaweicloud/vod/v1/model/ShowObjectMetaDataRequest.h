
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowObjectMetaDataRequest_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowObjectMetaDataRequest_H_


#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  ShowObjectMetaDataRequest
    : public ModelBase
{
public:
    ShowObjectMetaDataRequest();
    virtual ~ShowObjectMetaDataRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowObjectMetaDataRequest members

    /// <summary>
    /// 使用AK/SK方式认证时必选，请求的发生时间。 
    /// </summary>

    std::string getXSdkDate() const;
    bool xSdkDateIsSet() const;
    void unsetxSdkDate();
    void setXSdkDate(const std::string& value);

    /// <summary>
    /// obs桶名称
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// obs对象路径
    /// </summary>

    std::string getObject() const;
    bool objectIsSet() const;
    void unsetobject();
    void setObject(const std::string& value);

    /// <summary>
    /// 列举桶内对象列表时，指定一个标识符，作为列举时的起始位置，从该标识符以后按对象名的字典顺序返回对象列表
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);

    /// <summary>
    /// 列举对象的最大数目，返回的对象列表将是按照字典顺序的最多前limit个对象
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string xSdkDate_;
    bool xSdkDateIsSet_;
    std::string bucket_;
    bool bucketIsSet_;
    std::string object_;
    bool objectIsSet_;
    std::string marker_;
    bool markerIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowObjectMetaDataRequest& dereference_from_shared_ptr(std::shared_ptr<ShowObjectMetaDataRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_ShowObjectMetaDataRequest_H_
