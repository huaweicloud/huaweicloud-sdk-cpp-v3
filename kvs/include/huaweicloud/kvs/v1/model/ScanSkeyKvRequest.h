
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequest_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequest_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/ScanSkeyKvRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  ScanSkeyKvRequest
    : public ModelBase
{
public:
    ScanSkeyKvRequest();
    virtual ~ScanSkeyKvRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// ScanSkeyKvRequest members

    /// <summary>
    /// 仓名
    /// </summary>

    std::string getStoreName() const;
    bool storeNameIsSet() const;
    void unsetstoreName();
    void setStoreName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ScanSkeyKvRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ScanSkeyKvRequestBody& value);


protected:
    std::string storeName_;
    bool storeNameIsSet_;
    ScanSkeyKvRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ScanSkeyKvRequest& dereference_from_shared_ptr(std::shared_ptr<ScanSkeyKvRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_ScanSkeyKvRequest_H_
