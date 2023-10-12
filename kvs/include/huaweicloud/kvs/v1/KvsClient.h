#ifndef HUAWEICLOUD_SDK_KVS_V1_KvsClient_H_
#define HUAWEICLOUD_SDK_KVS_V1_KvsClient_H_
#ifndef HUAWEICLOUD_SDK_BSON_
#define HUAWEICLOUD_SDK_BSON_
#endif // HUAWEICLOUD_SDK_BSON_

#include <huaweicloud/kvs/v1/KvsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/kvs/v1/model/CreateTableRequest.h>
#include <huaweicloud/kvs/v1/model/CreateTableRequestBody.h>
#include <huaweicloud/kvs/v1/model/CreateTableResponse.h>
#include <huaweicloud/kvs/v1/model/DescribeTableRequest.h>
#include <huaweicloud/kvs/v1/model/DescribeTableRequestBody.h>
#include <huaweicloud/kvs/v1/model/DescribeTableResponse.h>
#include <string>

#include <huaweicloud/kvs/v1/model/BatchWriteKvRequest.h>
#include <huaweicloud/kvs/v1/model/BatchWriteKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/BatchWriteKvResponse.h>
#include <huaweicloud/kvs/v1/model/DeleteKvRequest.h>
#include <huaweicloud/kvs/v1/model/DeleteKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/DeleteKvResponse.h>
#include <huaweicloud/kvs/v1/model/GetKvRequest.h>
#include <huaweicloud/kvs/v1/model/GetKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/GetKvResponse.h>
#include <huaweicloud/kvs/v1/model/PutKvRequest.h>
#include <huaweicloud/kvs/v1/model/PutKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/PutKvResponse.h>
#include <huaweicloud/kvs/v1/model/RenameKvRequest.h>
#include <huaweicloud/kvs/v1/model/RenameKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/RenameKvResponse.h>
#include <huaweicloud/kvs/v1/model/ScanKvRequest.h>
#include <huaweicloud/kvs/v1/model/ScanKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/ScanKvResponse.h>
#include <huaweicloud/kvs/v1/model/ScanSkeyKvRequest.h>
#include <huaweicloud/kvs/v1/model/ScanSkeyKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/ScanSkeyKvResponse.h>
#include <huaweicloud/kvs/v1/model/UpdateKvRequest.h>
#include <huaweicloud/kvs/v1/model/UpdateKvRequestBody.h>
#include <huaweicloud/kvs/v1/model/UpdateKvResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Kvs::V1::Model;

class HUAWEICLOUD_KVS_V1_EXPORT  KvsClient : public Client
{
public:

    KvsClient();

    virtual ~KvsClient();

    static ClientBuilder<KvsClient> newBuilder();

    // 创建表
    //
    // create table
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTableResponse> createTable(
        CreateTableRequest &request
    );
    // 指定查询表的属性信息
    //
    // describe table
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeTableResponse> describeTable(
        DescribeTableRequest &request
    );

    // 持同一个store的同一张表的put-kv操作和delete-kv操作， 最多携带25个操作，body部分不超过8MB
    //
    // batch write kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchWriteKvResponse> batchWriteKv(
        BatchWriteKvRequest &request
    );
    // 删除指定的kv文档，默认不会返回kv文档内容
    //
    // delete kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKvResponse> deleteKv(
        DeleteKvRequest &request
    );
    // 下载一个kv文档的全部内容，或者部分字段的内容
    //
    // get kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<GetKvResponse> getKv(
        GetKvRequest &request
    );
    // 上传一个kv文档
    //
    // put kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PutKvResponse> putKv(
        PutKvRequest &request
    );
    // 更新指定kv的sortkey 并更新部分字段
    //
    // rename kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RenameKvResponse> renameKv(
        RenameKvRequest &request
    );
    // 对指定table 扫描主索引或者指定二级索引进行扫描，可指定filter过滤需要返回的doc
    //
    // scan kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScanKvResponse> scanKv(
        ScanKvRequest &request
    );
    // 与scan-kv类似，query-skey-kv必须指定shardkey
    //
    // scan skey kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ScanSkeyKvResponse> scanSkeyKv(
        ScanSkeyKvRequest &request
    );
    // 允许参数控制并返回删除前的kv文档内容,更新指定的kv文档,默认不会返回kv文档内容
    //
    // update kv
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKvResponse> updateKv(
        UpdateKvRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_KVS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Kvs::V1::KvsClient>;

#endif // HUAWEICLOUD_SDK_KVS_V1_KvsClient_H_

